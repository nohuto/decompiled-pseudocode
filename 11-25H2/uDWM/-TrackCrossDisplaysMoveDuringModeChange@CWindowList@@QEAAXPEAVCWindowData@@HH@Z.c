/*
 * XREFs of ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x18000A420
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000A050 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800275F8 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800683E4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800AF174 (-AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::TrackCrossDisplaysMoveDuringModeChange(
        CDisplayAnimatedVisual **this,
        struct CWindowData *a2)
{
  __int64 v4; // rdx
  int v5; // r9d
  int v6; // r10d
  _WORD *v7; // rax
  struct tagRECT v8; // xmm0
  int v9; // r8d
  int v10; // edx
  HMONITOR v11; // rbx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  POINT v15; // [rsp+30h] [rbp-68h] BYREF
  POINT pt; // [rsp+38h] [rbp-60h]
  struct tagRECT rc; // [rsp+40h] [rbp-58h] BYREF

  if ( this[70] )
  {
    if ( *((_QWORD *)a2 + 55) )
    {
      if ( *((_QWORD *)a2 + 56) )
      {
        if ( CWindowData::IsWindowVisibleAndUncloaked(a2) && (*(_BYTE *)(v4 + 674) & 0x40) == 0 )
        {
          v7 = *(_WORD **)(v4 + 16);
          if ( v7 )
          {
            if ( *v7 )
            {
              if ( (*(_BYTE *)(v4 + 678) & 0x10) == 0 )
              {
                v8 = *(struct tagRECT *)(v4 + 48);
                v9 = v5 - *(_DWORD *)(v4 + 52);
                v10 = v6 - *(_DWORD *)(v4 + 48);
                rc = v8;
                OffsetRect(&rc, v10, v9);
                pt.x = (_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v8, 8)) + _mm_cvtsi128_si32((__m128i)v8)) / 2;
                pt.y = (_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v8, 12))
                      + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v8, 4)))
                     / 2;
                v15.x = (rc.left + rc.right) / 2;
                v15.y = (rc.top + rc.bottom) / 2;
                v11 = MonitorFromPoint(pt, 0);
                if ( v11 != MonitorFromPoint(v15, 0) )
                {
                  if ( (unsigned int)dword_180118130 > 5 )
                  {
                    if ( (unsigned __int8)tlgKeywordOn(&dword_180118130, 2LL) )
                    {
                      v15 = (POINT)*((_QWORD *)a2 + 2);
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                        v12,
                        (unsigned int)&unk_1801062C3,
                        v13,
                        v14,
                        (__int64)&v15);
                    }
                  }
                  CDisplayAnimatedVisual::AddWindowMovedAcrossDisplays(this[70], a2);
                }
              }
            }
          }
        }
      }
    }
  }
}
