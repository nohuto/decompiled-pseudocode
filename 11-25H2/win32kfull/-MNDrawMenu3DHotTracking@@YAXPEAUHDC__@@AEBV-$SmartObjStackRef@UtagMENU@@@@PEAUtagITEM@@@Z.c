/*
 * XREFs of ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402EA4F8
 * Callers:
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 * Callees:
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 */

__int64 __fastcall MNDrawMenu3DHotTracking(HDC a1, __int64 **a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ebp
  unsigned int v17; // r15d
  int v18; // edi
  int v19; // esi
  __int64 v20; // r14

  result = *(_QWORD *)a3;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 96LL) || (*(_DWORD *)(result + 4) & 0x20000000) == 0 )
  {
    result = *(_QWORD *)(**a2 + 40);
    if ( (*(_DWORD *)(result + 40) & 1) == 0 )
    {
      result = *(_QWORD *)a3;
      v6 = *(unsigned int *)(*(_QWORD *)a3 + 4LL);
      if ( (v6 & 0x80u) == 0LL )
      {
        if ( (v6 & 0x100) == 0 )
        {
          if ( (v6 & 0x10000000) == 0 )
            return result;
          v13 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v13 + 40) + 24LL) )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 24LL);
            v10 = v8;
          }
          else
          {
            v14 = *(_QWORD *)(W32GetUserSessionState(v13, a2) + 19872);
            v8 = *(_QWORD *)(v14 + 4728);
            v10 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v15) + 19872) + 4728LL);
          }
          *(_DWORD *)(*(_QWORD *)a3 + 4LL) &= ~0x10000000u;
          goto LABEL_14;
        }
        v11 = *(_QWORD *)(W32GetUserSessionState(v6, a2) + 19872);
        v8 = *(_QWORD *)(v11 + 4856);
        v10 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v12) + 19872) + 4824LL);
      }
      else
      {
        v7 = *(_QWORD *)(W32GetUserSessionState(v6, a2) + 19872);
        v8 = *(_QWORD *)(v7 + 4824);
        v10 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v9) + 19872) + 4856LL);
      }
      *(_DWORD *)(*(_QWORD *)a3 + 4LL) |= 0x10000000u;
LABEL_14:
      v16 = *(_DWORD *)(*(_QWORD *)a3 + 64LL);
      v17 = *(_DWORD *)(*(_QWORD *)a3 + 68LL);
      v18 = *(_DWORD *)(*(_QWORD *)a3 + 72LL);
      v19 = *(_DWORD *)(*(_QWORD *)a3 + 76LL);
      v20 = GreSelectBrush(a1, v8);
      GrePatBlt(a1, v16, v17, v18 - 1, 1, 15728673);
      GrePatBlt(a1, v16, v17, 1, v19 - 1, 15728673);
      GreSelectBrush(a1, v10);
      GrePatBlt(a1, v16, v19 + v17 - 1, v18 - 1, 1, 15728673);
      GrePatBlt(a1, v18 + v16 - 1, v17, 1, v19, 15728673);
      return GreSelectBrush(a1, v20);
    }
  }
  return result;
}
