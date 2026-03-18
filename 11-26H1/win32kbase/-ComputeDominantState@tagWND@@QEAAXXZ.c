/*
 * XREFs of ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x1401A7D20
 * Callers:
 *     <none>
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140071C0C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400828BC (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x1401A81F0 (-OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z.c)
 */

void __fastcall tagWND::ComputeDominantState(tagWND *this, int a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // r8d
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // r15d
  char v13; // r14
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  tagWND *i; // rbx

  v4 = 5;
  v7 = 1;
  if ( (*(_BYTE *)(HMPheFromObject(this, a2, a3) + 25) & 1) == 0 )
  {
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
    {
      v9 = *((_QWORD *)this + 3);
      if ( v9 )
      {
        v5 = *(_QWORD *)(v9 + 8);
        if ( v5 )
        {
          if ( v8 == *(_QWORD *)(v5 + 24) )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v9, v5, v6) + 18928)
              && *(tagWND **)(*(_QWORD *)(W32GetUserSessionState(v11, v10, v6) + 18928) + 128LL) == this )
            {
              v4 = 0;
            }
            else
            {
              v5 = *((_QWORD *)this + 5);
              LOBYTE(v6) = *(_BYTE *)(v5 + 31);
              if ( (v6 & 0x10) != 0 && !IsRectEmptyInl((const struct tagRECT *)(v5 + 88)) )
              {
                if ( (v6 & 0x20) != 0 )
                {
                  v4 = 3;
                }
                else if ( (*(_BYTE *)(v5 + 233) & 0x60) != 0 )
                {
                  v4 = 4;
                }
                else
                {
                  v4 = (*((_DWORD *)this + 98) == 2) + 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v12 = *((_DWORD *)this + 99);
  if ( v12 != v4 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v13 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( v13 || v7 )
    {
      v14 = *(_QWORD *)this;
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v7,
        *(_QWORD *)(UserSessionState + 69136),
        5u,
        0xEu,
        0xEu,
        (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids,
        v14,
        v12,
        v4);
    }
    tagPROCESSINFO::OnDwsChanged(*(_QWORD *)(*((_QWORD *)this + 2) + 456LL), *((unsigned int *)this + 99), v4);
    for ( i = (tagWND *)*((_QWORD *)this + 50); i != (tagWND *)((char *)this + 400); i = *(tagWND **)i )
      tagPROCESSINFO::OnDwsChanged(*((_QWORD *)i - 2), *((unsigned int *)this + 99), v4);
    *((_DWORD *)this + 99) = v4;
  }
}
