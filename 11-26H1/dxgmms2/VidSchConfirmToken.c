/*
 * XREFs of VidSchConfirmToken @ 0x140004960
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiFlushPendingTokenList @ 0x140004A88 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x140005A84 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 */

void __fastcall VidSchConfirmToken(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-50h]
  struct _VIDSCH_GLOBAL *v14; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  char v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  _QWORD v18[4]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v19; // [rsp+68h] [rbp-8h]

  if ( a2 != -1 )
  {
    v6 = *a4;
    v13 = *a4;
    v18[0] = (char *)a1 + 2016;
    v8 = a3;
    v9 = a2;
    v19 = 0;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v18);
    v14 = a1;
    v15[1] = v15;
    v15[0] = v15;
    v10 = *((_QWORD *)a1 + v9 + 431);
    v16 = 0;
    v17 = 2;
    v11 = *(int *)(v10 + 304 * v8 + 188);
    if ( (int)v11 > -1 )
    {
      v12 = *((_QWORD *)a1 + 447) + 160 * v11;
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 112) == 1
          && *(_BYTE *)(v12 + 97)
          && *(_OWORD *)v12 == __PAIR128__(a5, __PAIR64__(HIDWORD(v13), v6))
          && *(_QWORD *)(v12 + 88) == a6 )
        {
          *(_BYTE *)(v12 + 98) = 1;
          if ( VidSchiCheckPlaneIndependentFlipCondition(a1, v9, v8) )
            VidSchiFlushPendingTokenList((struct HwQueueStagingList *)&v14, a1);
        }
      }
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v14);
    AcquireSpinLock::Release((AcquireSpinLock *)v18);
  }
}
