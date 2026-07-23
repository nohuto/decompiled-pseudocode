/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x1405C0460
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlQueryAssociatedProcessors(int a1, unsigned int *a2, __int64 a3)
{
  unsigned int v7; // esi
  unsigned int v8; // r14d
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 i; // r9
  unsigned int v16; // ebx
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // r11
  __int64 v20; // r10
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h]
  __int64 v27; // [rsp+38h] [rbp-28h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  unsigned __int64 v30; // [rsp+58h] [rbp-8h]

  v29 = 0LL;
  LODWORD(v30) = 0;
  v26 = 0LL;
  LODWORD(v27) = 0;
  v28 = 0LL;
  v25 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( !a2 )
    return 3221225485LL;
  v7 = 0;
  v8 = 0;
  v9 = HvlpAcquireHypercallPage((__int64)&v28, 1, 0LL, 8LL);
  v10 = HvlpAcquireHypercallPage((__int64)&v25, 2, 0LL, 272LL);
  v11 = v30;
  v12 = v10;
  *(_DWORD *)v9 = a1;
  if ( (unsigned __int16)HvcallInitiateHypercall(260LL, v11) )
  {
    v16 = -1073741823;
  }
  else
  {
    v14 = v12[1];
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v18 = !_BitScanForward64((unsigned __int64 *)&v20, v14);
      if ( v18 )
        break;
      _bittestandcomplement64((__int64 *)&v14, (unsigned int)v20);
      v13 = v12[(unsigned int)i + 2];
      while ( 1 )
      {
        v18 = !_BitScanForward64((unsigned __int64 *)&v19, v13);
        if ( v18 )
          break;
        ++v7;
        v13 ^= 1LL << v19;
        if ( *a2 >= v7 )
        {
          v17 = v8++;
          *(_DWORD *)(a3 + 4 * v17) = v19 + ((_DWORD)v20 << 6);
        }
      }
    }
    v21 = *a2;
    *a2 = v7;
    v16 = v21 < v7 ? 0xC0000023 : 0;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v25, v13, v14, i);
  HvlpReleaseHypercallPage((unsigned int *)&v28, v22, v23, v24);
  return v16;
}
