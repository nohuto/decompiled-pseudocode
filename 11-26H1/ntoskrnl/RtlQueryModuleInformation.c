/*
 * XREFs of RtlQueryModuleInformation @ 0x140AAD1D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int *Pool2; // rbx
  ULONG i; // r8d
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  unsigned int *v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // xmm1
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE SystemInformation[4]; // [rsp+30h] [rbp-168h] BYREF
  int v21; // [rsp+34h] [rbp-164h]

  v21 = 0;
  memset_0(SystemInformation, 0, 0x12CuLL);
  v6 = 0;
  if ( a2 == 272 )
  {
    result = (a3 & 7) != 0 ? 0xC00000F1 : 0;
    if ( (a3 & 7) != 0 )
      return result;
  }
  else
  {
    if ( a2 != 8 )
      return 3221225712LL;
    if ( (a3 & 7) != 0 )
      return 3221225713LL;
  }
  Pool2 = (unsigned int *)SystemInformation;
  for ( i = 304; ; i = ReturnLength[0] )
  {
    ReturnLength[0] = 0;
    v10 = ZwQuerySystemInformation(SystemModuleInformation, Pool2, i, ReturnLength);
    v11 = v10;
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741820 )
      break;
    if ( !a3 )
    {
      v11 = 0;
      v12 = a2 * ((ReturnLength[0] - 8) / 0x128);
LABEL_14:
      *a1 = v12;
      break;
    }
    if ( v10 >= 0 )
    {
      v12 = a2 * *Pool2;
      if ( *a1 < v12 )
      {
        v11 = -1073741789;
      }
      else if ( *Pool2 )
      {
        do
        {
          if ( a2 == 8 )
          {
            *(_QWORD *)(a3 + 8LL * v6) = *(_QWORD *)&Pool2[74 * v6 + 6];
          }
          else
          {
            v13 = 272LL * v6;
            v14 = 74LL * v6;
            *(_QWORD *)(v13 + a3) = *(_QWORD *)&Pool2[v14 + 6];
            *(_DWORD *)(v13 + a3 + 8) = Pool2[v14 + 8];
            *(_WORD *)(v13 + a3 + 12) = HIWORD(Pool2[v14 + 11]);
            v15 = (_OWORD *)(v13 + a3 + 14);
            v16 = &Pool2[v14 + 12];
            v17 = 2LL;
            do
            {
              *v15 = *(_OWORD *)v16;
              v15[1] = *((_OWORD *)v16 + 1);
              v15[2] = *((_OWORD *)v16 + 2);
              v15[3] = *((_OWORD *)v16 + 3);
              v15[4] = *((_OWORD *)v16 + 4);
              v15[5] = *((_OWORD *)v16 + 5);
              v15[6] = *((_OWORD *)v16 + 6);
              v15 += 8;
              v18 = *((_OWORD *)v16 + 7);
              v16 += 32;
              *(v15 - 1) = v18;
              --v17;
            }
            while ( v17 );
          }
          ++v6;
        }
        while ( v6 < *Pool2 );
      }
      goto LABEL_14;
    }
    if ( Pool2 != (unsigned int *)SystemInformation )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (unsigned int *)ExAllocatePool2(0x101uLL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  if ( Pool2 != (unsigned int *)SystemInformation )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
