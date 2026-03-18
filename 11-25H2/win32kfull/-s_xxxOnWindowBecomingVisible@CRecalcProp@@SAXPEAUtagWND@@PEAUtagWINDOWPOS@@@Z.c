/*
 * XREFs of ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401CB264
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ @ 0x1402C5AD4 (-SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C6EFC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall CRecalcProp::s_xxxOnWindowBecomingVisible(struct tagWND *a1, struct tagWINDOWPOS *a2)
{
  __int64 v4; // rdx
  struct CRecalcProp *RecalcProperty; // rax
  CRecalcProp *v6; // rsi
  HWND v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  int v14; // r10d
  _DWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  char v16; // [rsp+28h] [rbp-38h]
  int v17; // [rsp+2Ch] [rbp-34h]
  int v18; // [rsp+30h] [rbp-30h]
  __int128 *v19; // [rsp+38h] [rbp-28h]
  int v20; // [rsp+40h] [rbp-20h]
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF

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
        && !CRecalcState::ShouldDeferRecalc(*((_QWORD *)RecalcProperty + 4), (__int64)a1) )
      {
        if ( (*((_BYTE *)a2 + 32) & 3) != 3 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 || IsArranged(a1) )
        {
          CRecalcProp::SetPendingStateToProcessed(v6);
        }
        else
        {
          v15[0] = 0;
          v15[1] = 0;
          v17 = 0;
          v18 = 0;
          v7 = *(HWND *)a1;
          v16 = 0;
          v19 = &v21;
          v21 = 0LL;
          v20 = 4;
          CRecalcProp::s_xxxProcessTopologyChange(v7, (struct CRecalcContext *)v15);
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v9, v8, v10)
            && v15[0] == 4 )
          {
            v11 = DWORD1(v21);
            if ( (_QWORD)v21 == *((_QWORD *)a2 + 2) )
              v12 = *((_DWORD *)a2 + 8);
            else
              v12 = *((_DWORD *)a2 + 8) & 0xFFFFFFFD;
            v13 = HIDWORD(v21);
            v14 = DWORD2(v21) - v21;
            if ( __PAIR64__(HIDWORD(v21) - DWORD1(v21), DWORD2(v21) - (int)v21) != *((_QWORD *)a2 + 3) )
              v12 &= ~1u;
            *((_DWORD *)a2 + 4) = v21;
            *((_DWORD *)a2 + 8) = v12 | 0x80000;
            *((_DWORD *)a2 + 7) = v13 - v11;
            *((_DWORD *)a2 + 5) = v11;
            *((_DWORD *)a2 + 6) = v14;
          }
        }
      }
    }
  }
}
