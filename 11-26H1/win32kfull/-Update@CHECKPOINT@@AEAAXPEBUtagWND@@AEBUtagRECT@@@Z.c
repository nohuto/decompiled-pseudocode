/*
 * XREFs of ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1400312B0
 * Callers:
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1401E02A0 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1402134D4 (-SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 */

void __fastcall CHECKPOINT::Update(CHECKPOINT *this, const struct tagWND *a2, const struct tagRECT *a3)
{
  char v6; // cl
  int v7; // edx
  _DWORD *v8; // r8
  int v9; // eax
  struct tagMONITOR *v10; // rax
  struct tagRECT *MonitorMaxArea; // rax
  struct tagRECT v12; // xmm0
  struct tagRECT v13; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
  if ( (v6 & 0x20) != 0 )
  {
    *((_DWORD *)this + 4) |= 0x10u;
    *(_DWORD *)this = a3->left;
    *((_DWORD *)this + 1) = a3->top;
  }
  else if ( (v6 & 1) != 0 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    if ( *((_QWORD *)a2 + 13) == GetDesktopWindow(a2) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 19LL) & 0x40) != 0 )
      {
        v9 = -1;
        *((_DWORD *)this + 4) = v7 & 0xFFFFFFDF;
        *((_DWORD *)this + 2) = -1;
      }
      else
      {
        v10 = (struct tagMONITOR *)MonitorFromRect(&a3->left, 1LL, 0);
        MonitorMaxArea = GetMonitorMaxArea(&v13, a2, v10);
        v12 = *MonitorMaxArea;
        *((_DWORD *)this + 2) = a3->left - *(_OWORD *)MonitorMaxArea;
        v9 = a3->top - v12.top;
      }
    }
    else
    {
      *((_DWORD *)this + 2) = *v8;
      v9 = v8[1];
    }
    *((_DWORD *)this + 3) = v9;
  }
  else if ( IsArranged(a2) )
  {
    CHECKPOINT::SetRestoreToArrangeRect(this, a2, a3);
  }
  else
  {
    CHECKPOINT::SetNormalRect(this, a2, a3, 0);
  }
}
