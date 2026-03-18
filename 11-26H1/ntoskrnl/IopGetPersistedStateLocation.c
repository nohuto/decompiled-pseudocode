/*
 * XREFs of IopGetPersistedStateLocation @ 0x140B3C924
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x140AF8694 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetPersistedStateLocation(__int64 a1, _WORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // esi
  void *Pool2; // rdi
  int PersistedStateLocation; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v11) = 0;
  v6 = 256;
  while ( 1 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_5;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               a2,
                               0,
                               Pool2,
                               v6,
                               (unsigned int *)&v11);
    v9 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( (unsigned int)v11 <= v6 )
    {
      v9 = -1073741595;
      goto LABEL_9;
    }
    v6 = v11;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_9:
  ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
LABEL_5:
  result = v9;
  *a4 = Pool2;
  return result;
}
