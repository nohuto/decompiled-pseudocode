/*
 * XREFs of PnpReadDeviceConfiguration @ 0x140AA1288
 * Callers:
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA0C1C (PnpGetDeviceResourcesFromRegistry.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpReadDeviceConfiguration(void *a1, int a2, void **a3, _DWORD *a4)
{
  int v6; // edx
  int v7; // edx
  const WCHAR *v9; // rdx
  NTSTATUS RegistryValue; // edi
  unsigned int *v11; // rbx
  __int64 Pool2; // rax
  unsigned int *v13; // r10
  unsigned int v14; // r8d
  __int64 i; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  P = 0LL;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 3221225712LL;
      v9 = L"BootConfig";
    }
    else
    {
      v9 = L"ForcedConfig";
    }
  }
  else
  {
    v9 = L"AllocConfig";
  }
  RegistryValue = IopGetRegistryValue(a1, v9, 0, &P);
  if ( RegistryValue >= 0 )
  {
    v11 = (unsigned int *)P;
    if ( *((_DWORD *)P + 1) == 8 )
    {
      if ( *((_DWORD *)P + 3) )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        *a3 = (void *)Pool2;
        if ( Pool2 )
        {
          *a4 = v11[3];
          memmove(*a3, (char *)v11 + v11[2], v11[3]);
          v13 = (unsigned int *)*a3;
          v14 = 0;
          for ( i = (__int64)*a3 + 4; v14 < *v13; i = v17 )
          {
            if ( *(_DWORD *)i == -1 )
              *(_QWORD *)i = 1LL;
            v16 = *(_DWORD *)(i + 12);
            v17 = i + 16;
            if ( v16 )
            {
              v18 = v16;
              do
              {
                v19 = 0LL;
                if ( *(_BYTE *)v17 == 5 )
                  v19 = *(unsigned int *)(v17 + 4);
                v17 += v19 + 20;
                --v18;
              }
              while ( v18 );
            }
            ++v14;
          }
        }
        else
        {
          RegistryValue = -1073741670;
        }
      }
    }
    else
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)RegistryValue;
}
