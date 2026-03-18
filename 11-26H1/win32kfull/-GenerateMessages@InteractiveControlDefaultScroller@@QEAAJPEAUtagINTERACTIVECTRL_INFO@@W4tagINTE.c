/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14013D0F0
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14025560C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x14013D28C (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 *     ?UpdateWindow@InteractiveControlDefaultScroller@@AEAAJPEAPEAUtagWND@@@Z @ 0x1402940FC (-UpdateWindow@InteractiveControlDefaultScroller@@AEAAJPEAPEAUtagWND@@@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1402FF4D0 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402FF5A0 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1402FF760 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1402FFB34 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  void *v7; // rdx
  int updated; // eax
  int v9; // eax
  int v10; // edx
  const char *v12; // [rsp+60h] [rbp+30h] BYREF
  int v13; // [rsp+70h] [rbp+40h] BYREF
  struct tagWND *v14; // [rsp+78h] [rbp+48h] BYREF

  *((_DWORD *)a1 + 14) = a3;
  LODWORD(v12) = 0;
  LOWORD(v13) = 0;
  v14 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    updated = InteractiveControlDefaultScroller::UpdateWindow(a1, &v14);
    v6 = updated;
    if ( updated >= 0 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(a1, (int *)&v12);
      v6 = updated;
      if ( updated >= 0 )
      {
        if ( (_DWORD)v12 )
          InteractiveControlDefaultScroller::Reset(a1, v14);
        v9 = *((_DWORD *)a1 + 15);
        v10 = *(_DWORD *)(a2 + 24);
        if ( v9 && v10 > 0 != v9 > 0 )
        {
          *((_DWORD *)a1 + 15) = v10;
          v6 = 0;
          InteractiveControlDefaultScroller::Reset(a1, v14);
          return v6;
        }
        *((_DWORD *)a1 + 15) = v10;
        updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
        v6 = updated;
        if ( updated >= 0 )
        {
          updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, (__int16 *)&v13);
          v6 = updated;
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v13, v14);
            v6 = updated;
            if ( updated >= 0 || (unsigned int)dword_1403AAA68 <= 2 )
              return v6;
            v7 = &unk_140379E4B;
          }
          else
          {
            if ( (unsigned int)dword_1403AAA68 <= 2 )
              return v6;
            v7 = &unk_140379EF3;
          }
        }
        else
        {
          if ( (unsigned int)dword_1403AAA68 <= 2 )
            return v6;
          v7 = &unk_140379EBB;
        }
      }
      else
      {
        if ( (unsigned int)dword_1403AAA68 <= 2 )
          return v6;
        v7 = &unk_140379E83;
      }
    }
    else
    {
      if ( (unsigned int)dword_1403AAA68 <= 2 )
        return v6;
      v7 = &unk_140379F63;
    }
    v13 = updated;
    goto LABEL_25;
  }
  v6 = -1073700861;
  if ( (unsigned int)dword_1403AAA68 > 2 )
  {
    v13 = -1073700861;
    v7 = &unk_140379F2B;
LABEL_25:
    v12 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)v7,
      a3,
      a4,
      (void **)&v12,
      (__int64)&v13);
  }
  return v6;
}
