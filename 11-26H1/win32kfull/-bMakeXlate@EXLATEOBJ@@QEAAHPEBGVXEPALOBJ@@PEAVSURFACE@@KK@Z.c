/*
 * XREFs of ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1401895FC
 * Callers:
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311624 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x140189934 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall EXLATEOBJ::bMakeXlate(
        XLATE **a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r12d
  __int64 v9; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // r14
  struct Gre::Base::SESSION_GLOBALS *v12; // r13
  signed __int32 v13; // ecx
  __int64 v14; // r15
  unsigned int *v15; // rbx
  __int64 v16; // rsi
  unsigned int v17; // r14d
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // r8d
  unsigned int v21; // eax
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  unsigned int v32; // eax
  __int64 v33; // [rsp+20h] [rbp-10h] BYREF
  HSEMAPHORE v34; // [rsp+28h] [rbp-8h] BYREF
  __int64 v36; // [rsp+80h] [rbp+50h] BYREF
  __int64 v37; // [rsp+88h] [rbp+58h] BYREF

  v36 = a3;
  v6 = a6;
  v37 = *(_QWORD *)(a4 + 128);
  if ( a6 <= 0x3FFFFFFF && 4 * (unsigned __int64)a6 + 88 > 4 * (unsigned __int64)a6 )
  {
    v9 = AllocThreadBufferWithTag(4 * a6 + 88, 1953265735LL, 0LL);
    *a1 = (XLATE *)v9;
    v11 = v9;
    if ( v9 )
    {
      v12 = Gre::Base::Globals(v10);
      v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 944, 1u);
      v14 = a5;
      v15 = (unsigned int *)(v11 + 84);
      *(_DWORD *)(v11 + 12) = v6;
      *(_DWORD *)v11 = v13 + 1;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_DWORD *)(v11 + 32) = 0;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 16) = v11 + 84;
      v16 = (unsigned int)v14;
      *(_QWORD *)(v11 + 4) = 2LL;
      *(_DWORD *)(v11 + 36) = -1;
      *(_QWORD *)(v11 + 48) = v37;
      *(_QWORD *)(v11 + 56) = v36;
      memset_0((void *)(v11 + 4 * (v14 + 21)), 0, 4LL * (v6 - (unsigned int)v14));
      v17 = *(_DWORD *)(v36 + 28);
      SEMOBJ<13>::SEMOBJ<13>(&v34, v12);
      v18 = v37;
      if ( !v37 || (*(_DWORD *)(v37 + 24) & 0x800) != 0 )
      {
        if ( !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v36) )
        {
          v25 = v36;
          if ( v37 )
          {
            v26 = *(_QWORD *)(v36 + 80);
            if ( v26 )
            {
              if ( (_DWORD)v14 )
              {
                do
                {
                  v27 = *a2;
                  if ( (unsigned int)v27 >= v17 )
                    v27 = (unsigned int)v27 % v17;
                  ++a2;
                  *v15++ = *(unsigned __int8 *)(v27 + v26 + 4);
                  --v16;
                }
                while ( v16 );
              }
              goto LABEL_13;
            }
          }
          else
          {
            v28 = *(_QWORD *)(v36 + 72);
            if ( v28 )
            {
              if ( (_DWORD)v14 )
              {
                do
                {
                  v29 = *a2;
                  if ( (unsigned int)v29 >= v17 )
                    v29 = (unsigned int)v29 % v17;
                  ++a2;
                  *v15++ = *(unsigned __int8 *)(v29 + v28 + 4);
                  --v16;
                }
                while ( v16 );
              }
              goto LABEL_13;
            }
          }
          if ( (_DWORD)v14 )
          {
            while ( 1 )
            {
              v30 = *a2;
              if ( (unsigned int)v30 >= v17 )
                v30 = (unsigned int)v30 % v17;
              if ( HIBYTE(*(_DWORD *)(*(_QWORD *)(v25 + 112) + 4 * v30)) == 2 )
              {
                v31 = *(_DWORD *)(*(_QWORD *)(v25 + 112) + 4 * v30);
                v32 = v31 & ((unsigned __int16)v31 < 0x100u ? 0xFFFF : 255);
              }
              else
              {
                v33 = *((_QWORD *)v12 + 484);
                v32 = XEPALOBJ::ulDispatchGFPEFunction(&v33, *(unsigned int *)(v33 + 96));
                if ( v32 >= 0xA )
                  v32 += 236;
              }
              *v15 = v32;
              ++a2;
              ++v15;
              if ( !--v16 )
                break;
              v25 = v36;
            }
          }
          goto LABEL_13;
        }
        if ( (_DWORD)v14 )
        {
          do
          {
            v24 = *a2;
            if ( v24 >= 0x14 )
              v24 %= 0x14u;
            if ( v24 >= 0xA )
              v24 += 236;
            ++a2;
            *v15++ = v24;
            --v16;
          }
          while ( v16 );
        }
      }
      else if ( (_DWORD)v14 )
      {
        while ( 1 )
        {
          v19 = *a2;
          if ( v19 >= v17 )
            v19 %= v17;
          v20 = *(_DWORD *)(*(_QWORD *)(v36 + 112) + 4LL * v19);
          if ( HIBYTE(v20) == 2 )
          {
            v23 = *(_DWORD *)(v18 + 28);
            if ( v23 )
            {
              v21 = (unsigned __int16)v20;
              if ( (unsigned __int16)v20 >= v23 )
                v21 = (unsigned __int16)v20 % v23;
            }
            else
            {
              v21 = 0;
            }
          }
          else
          {
            v21 = XEPALOBJ::ulDispatchGFPEFunction(&v37, *(unsigned int *)(v18 + 96));
          }
          *v15 = v21;
          ++a2;
          ++v15;
          if ( !--v16 )
            break;
          v18 = v37;
        }
      }
LABEL_13:
      XLATE::vCheckForTrivial(*a1);
      SEMOBJ<13>::vUnlock(&v34);
      return 1LL;
    }
  }
  return 0LL;
}
