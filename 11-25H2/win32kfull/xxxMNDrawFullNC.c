/*
 * XREFs of xxxMNDrawFullNC @ 0x1402EAC74
 * Callers:
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMNSetTop @ 0x1402C0490 (xxxMNSetTop.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x14003F6E8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x14003FB0C (xxxSendUAHMenuMessage.c)
 *     MNIsFlatMenu @ 0x14004083C (MNIsFlatMenu.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     DrawEdge @ 0x1400552A8 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x140055A78 (GreSetBrushOrg.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     DrawFrame @ 0x1401F0710 (DrawFrame.c)
 *     GreGetBrushOrg @ 0x140208D4C (GreGetBrushOrg.c)
 *     MNDrawEdge @ 0x14021227C (MNDrawEdge.c)
 *     MNDrawArrow @ 0x1402EA96C (MNDrawArrow.c)
 */

__int64 __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  HDC DCEx; // rsi
  __int64 v9; // rdx
  _DWORD *v10; // rdx
  __int32 v11; // r12d
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  const struct tagDPIMETRICS *v20; // rax
  __m128i v21; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h]

  result = *(_QWORD *)a3;
  v4 = 0;
  v23 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)result + 40LL) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    result = MNIsUAHMenu(*(struct tagMENU **)(**(_QWORD **)a3 + 40LL), (__int64)a2);
    if ( (_DWORD)result )
    {
      result = *(_QWORD *)a3;
      if ( *(_QWORD *)(**(_QWORD **)a3 + 16LL) )
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
          BugCheckParameter3,
          *(_QWORD *)(**(_QWORD **)a3 + 16LL));
        v4 = xxxSendUAHMenuMessage(*(struct tagWND **)(**(_QWORD **)a3 + 16LL), 0x95u);
        result = Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v9);
      }
    }
    if ( *(_QWORD *)(**(_QWORD **)a3 + 40LL) )
    {
      if ( v4 )
      {
        MNDrawArrow(DCEx, a3, -3);
        result = MNDrawArrow(DCEx, a3, -4);
      }
      else
      {
        v10 = (_DWORD *)*((_QWORD *)a1 + 5);
        v21.m128i_i64[0] = 0LL;
        v21.m128i_i32[2] = v10[24] - v10[22];
        v21.m128i_i32[3] = v10[25] - v10[23];
        if ( MNIsFlatMenu(v21.m128i_u32[3], (__int64)v10) )
        {
          MNDrawEdge(*(_QWORD *)(**(_QWORD **)a3 + 40LL), a2, &v21, 0x2000);
          v11 = v21.m128i_i32[3];
        }
        else
        {
          DrawEdge(DCEx, &v21, 5u, 8207);
          DrawFrame(DCEx, v21.m128i_i32, 1, 120);
          ++v21.m128i_i32[0];
          --v21.m128i_i32[2];
          ++v21.m128i_i32[1];
          v11 = v21.m128i_i32[3] - 1;
        }
        v12 = v11 - *((_DWORD *)GetDPIMETRICS(a1) + 7);
        GreGetBrushOrg(DCEx, &v23);
        v14 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 40LL);
        if ( *(_QWORD *)(v14 + 24) )
        {
          v15 = MNGetpItemFromIndex(
                  *(_QWORD *)(**(_QWORD **)a3 + 40LL),
                  *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 116LL));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_QWORD *)v15 + 68LL), 0LL);
          v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 40LL) + 24LL);
        }
        else
        {
          v16 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872) + 4728LL);
        }
        v17 = GreSelectBrush(DCEx, v16);
        v18 = v21.m128i_i32[2] - v21.m128i_i32[0];
        v24 = v17;
        DPIMETRICS = GetDPIMETRICS(a1);
        GrePatBlt(DCEx, v21.m128i_i32[0], v21.m128i_u32[1], v18, *((_DWORD *)DPIMETRICS + 7), 15728673);
        MNDrawArrow(DCEx, a3, -3);
        v20 = GetDPIMETRICS(a1);
        GrePatBlt(DCEx, v21.m128i_i32[0], v12, v18, *((_DWORD *)v20 + 7), 15728673);
        MNDrawArrow(DCEx, a3, -4);
        GreSetBrushOrg(DCEx, v23, SHIDWORD(v23), 0LL);
        result = GreSelectBrush(DCEx, v24);
      }
      if ( !a2 )
        return _ReleaseDC(DCEx);
    }
    else if ( !a2 && DCEx )
    {
      return _ReleaseDC(DCEx);
    }
  }
  return result;
}
