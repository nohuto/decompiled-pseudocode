/*
 * XREFs of BgpTxtCreateRegion @ 0x140C57CF0
 * Callers:
 *     BgpDisplayCharacterGetContext @ 0x140C55BB4 (BgpDisplayCharacterGetContext.c)
 *     ResFwConfigureDisplayStringResources @ 0x140C56C5C (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140C570AC (AnFwConfigureProgressResources.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     BgpGxFillRectangle @ 0x1404A6E34 (BgpGxFillRectangle.c)
 *     BgpGetResolution @ 0x14050E808 (BgpGetResolution.c)
 *     BgpFoGetTextMetrics @ 0x140512FBC (BgpFoGetTextMetrics.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x140C59640 (BgpGxRectangleCreate.c)
 *     BgpFoGetFontHandle @ 0x140C5A508 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall BgpTxtCreateRegion(_DWORD *a1, _DWORD *a2, __int64 a3, _QWORD *a4, __int64 *a5, char a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  int FontHandle; // edi
  _DWORD *v11; // rdx
  void *Memory; // rax
  __int64 v13; // rbx
  unsigned int *v14; // r12
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+28h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-30h]
  __int64 v24; // [rsp+38h] [rbp-28h]
  _DWORD v25[6]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  FontHandle = 0;
  v21 = 0LL;
  v22 = 0LL;
  *a5 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v24 = *(_QWORD *)BgpGetResolution(v25);
      if ( *v11 <= (unsigned int)v24 && v11[1] <= HIDWORD(v24) )
      {
        Memory = (void *)BgpFwAllocateMemory(0x50uLL);
        v13 = (__int64)Memory;
        if ( !Memory )
        {
          FontHandle = -1073741801;
LABEL_38:
          *a5 = v13;
          return (unsigned int)FontHandle;
        }
        memset_0(Memory, 0, 0x50uLL);
        if ( a3 )
        {
          v14 = (unsigned int *)(v13 + 40);
          *(_OWORD *)(v13 + 40) = *(_OWORD *)a3;
          *(_QWORD *)(v13 + 56) = *(_QWORD *)(a3 + 16);
        }
        else
        {
          FontHandle = BgpFoGetFontHandle(0LL);
          if ( FontHandle < 0 )
            goto LABEL_37;
          v15 = v23;
          v14 = (unsigned int *)(v13 + 40);
          *(_DWORD *)(v13 + 40) = 0;
          *(_QWORD *)(v13 + 48) = v15;
          *(_DWORD *)(v13 + 44) = -1;
          *(_QWORD *)(v13 + 56) = 18LL;
        }
        v16 = (_QWORD *)(v13 + 64);
        if ( a4 )
        {
          *v16 = *a4;
          goto LABEL_15;
        }
        FontHandle = BgpFoGetTextMetrics((__int64)v14, v13 + 64);
        if ( FontHandle >= 0 )
        {
          v16 = (_QWORD *)(v13 + 64);
LABEL_15:
          if ( (a6 & 1) == 0 )
          {
            v17 = *(_DWORD *)(v13 + 68);
            if ( a2[1] < v17 )
              a2[1] = v17;
            if ( *a2 < *(_DWORD *)v16 )
              *a2 = *(_DWORD *)v16;
          }
          if ( *a1 + *a2 > (unsigned int)v24 || (unsigned int)(a1[1] + a2[1]) > HIDWORD(v24) )
          {
            FontHandle = -1073741811;
            goto LABEL_33;
          }
          if ( (a6 & 2) == 0 )
          {
            v18 = BgpGxRectangleCreate(a2, 32LL, &v21);
            v6 = v21;
            FontHandle = v18;
            if ( v18 < 0 )
              goto LABEL_33;
            BgpGxFillRectangle(v21, *v14);
          }
          if ( (a6 & 9) == 0 )
            goto LABEL_28;
          v19 = BgpGxRectangleCreate(a2, 32LL, &v22);
          v7 = v22;
          FontHandle = v19;
          if ( v19 >= 0 )
          {
            *(_QWORD *)(v13 + 32) = v22;
LABEL_28:
            *(_QWORD *)v13 = *(_QWORD *)a1;
            *(_QWORD *)(v13 + 8) = *(_QWORD *)a2;
            *(_DWORD *)(v13 + 16) = a2[2];
            *(_QWORD *)(v13 + 24) = v6;
            *(_QWORD *)(v13 + 72) = 1LL;
            if ( (a6 & 4) != 0 )
              *(_DWORD *)(v13 + 72) = 5;
            if ( FontHandle >= 0 )
              goto LABEL_38;
          }
LABEL_33:
          if ( v6 )
            BgpGxRectangleDestroy(v6);
          if ( v7 )
            BgpGxRectangleDestroy(v7);
        }
LABEL_37:
        BgpFwFreeMemory(v13);
        goto LABEL_38;
      }
    }
  }
  return 3221225485LL;
}
