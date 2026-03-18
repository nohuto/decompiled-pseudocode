/*
 * XREFs of RtlQueryModuleInformation @ 0x140AAF580
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int *Pool2; // rbx
  int SystemInformation; // eax
  unsigned int v10; // esi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  unsigned int *v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // xmm1
  _BYTE P[4]; // [rsp+30h] [rbp-168h] BYREF
  int v19; // [rsp+34h] [rbp-164h]

  v19 = 0;
  memset_0(P, 0, 0x12CuLL);
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
  Pool2 = (unsigned int *)P;
  while ( 1 )
  {
    SystemInformation = ZwQuerySystemInformation(11LL, (__int64)Pool2);
    v10 = SystemInformation;
    if ( ((SystemInformation + 0x80000000) & 0x80000000) == 0 && SystemInformation != -1073741820 )
      break;
    if ( !a3 )
    {
      v10 = 0;
      v11 = 14510024 * a2;
LABEL_14:
      *a1 = v11;
      break;
    }
    if ( SystemInformation >= 0 )
    {
      v11 = a2 * *Pool2;
      if ( *a1 < v11 )
      {
        v10 = -1073741789;
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
            v12 = 272LL * v6;
            v13 = 74LL * v6;
            *(_QWORD *)(v12 + a3) = *(_QWORD *)&Pool2[v13 + 6];
            *(_DWORD *)(v12 + a3 + 8) = Pool2[v13 + 8];
            *(_WORD *)(v12 + a3 + 12) = HIWORD(Pool2[v13 + 11]);
            v14 = (_OWORD *)(v12 + a3 + 14);
            v15 = &Pool2[v13 + 12];
            v16 = 2LL;
            do
            {
              *v14 = *(_OWORD *)v15;
              v14[1] = *((_OWORD *)v15 + 1);
              v14[2] = *((_OWORD *)v15 + 2);
              v14[3] = *((_OWORD *)v15 + 3);
              v14[4] = *((_OWORD *)v15 + 4);
              v14[5] = *((_OWORD *)v15 + 5);
              v14[6] = *((_OWORD *)v15 + 6);
              v14 += 8;
              v17 = *((_OWORD *)v15 + 7);
              v15 += 32;
              *(v14 - 1) = v17;
              --v16;
            }
            while ( v16 );
          }
          ++v6;
        }
        while ( v6 < *Pool2 );
      }
      goto LABEL_14;
    }
    if ( Pool2 != (unsigned int *)P )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (unsigned int *)ExAllocatePool2(0x101uLL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  if ( Pool2 != (unsigned int *)P )
    ExFreePoolWithTag(Pool2, 0);
  return v10;
}
