/*
 * XREFs of ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401F3684
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14015F738 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ @ 0x1402DE5F0 (-SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall CRecalcProp::s_xxxOnWindowBecomingVisible(struct tagWND *a1, struct tagWINDOWPOS *a2)
{
  __int64 v4; // rdx
  struct CRecalcProp *RecalcProperty; // rax
  CRecalcProp *v6; // rsi
  HWND v7; // rcx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // r9d
  int v11; // r10d
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  char v13; // [rsp+28h] [rbp-38h]
  __int64 v14; // [rsp+2Ch] [rbp-34h]
  __int128 *v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a2 + 8) & 0x40) != 0
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
    && IsTopLevelWindow((__int64)a1)
    && (*((_DWORD *)a1 + 96) & 0x10) == 0 )
  {
    RecalcProperty = CRecalcProp::GetRecalcProperty(a1, v4);
    v6 = RecalcProperty;
    if ( RecalcProperty )
    {
      if ( *((_DWORD *)RecalcProperty + 6) == 1
        && !CRecalcState::ShouldDeferRecalc(*((_QWORD *)RecalcProperty + 4), (__int64)a1, 3) )
      {
        if ( (*((_BYTE *)a2 + 32) & 3) != 3 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 || IsArranged(a1) )
        {
          CRecalcProp::SetPendingStateToProcessed(v6);
        }
        else
        {
          v7 = *(HWND *)a1;
          v13 = 0;
          v12 = 0LL;
          v15 = &v17;
          v17 = 0LL;
          v14 = 0LL;
          v16 = 4;
          CRecalcProp::s_xxxProcessTopologyChange(v7, (struct CRecalcContext *)&v12);
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
            && (_DWORD)v12 == 4 )
          {
            v8 = DWORD1(v17);
            if ( (_QWORD)v17 == *((_QWORD *)a2 + 2) )
              v9 = *((_DWORD *)a2 + 8);
            else
              v9 = *((_DWORD *)a2 + 8) & 0xFFFFFFFD;
            v10 = HIDWORD(v17);
            v11 = DWORD2(v17) - v17;
            if ( __PAIR64__(HIDWORD(v17) - DWORD1(v17), DWORD2(v17) - (int)v17) != *((_QWORD *)a2 + 3) )
              v9 &= ~1u;
            *((_DWORD *)a2 + 4) = v17;
            *((_DWORD *)a2 + 8) = v9 | 0x80000;
            *((_DWORD *)a2 + 7) = v10 - v8;
            *((_DWORD *)a2 + 5) = v8;
            *((_DWORD *)a2 + 6) = v11;
          }
        }
      }
    }
  }
}
