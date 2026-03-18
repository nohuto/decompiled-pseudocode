/*
 * XREFs of ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402FA164
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 */

__int64 __fastcall MNDrawMenu3DHotTracking(Gre::Base *a1, __int64 **a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // ebp
  int v19; // r15d
  int v20; // edi
  int v21; // esi
  __int64 v22; // r14

  result = *a3;
  if ( !*(_QWORD *)(*a3 + 96) || (*(_DWORD *)(result + 4) & 0x20000000) == 0 )
  {
    v7 = **a2;
    result = *(_QWORD *)(v7 + 40);
    if ( (*(_DWORD *)(result + 40) & 1) == 0 )
    {
      result = *a3;
      v8 = *(unsigned int *)(*a3 + 4);
      if ( (v8 & 0x80u) == 0LL )
      {
        if ( (v8 & 0x100) == 0 )
        {
          if ( (v8 & 0x10000000) == 0 )
            return result;
          v15 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v15 + 40) + 24LL) )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 24LL);
            v12 = v10;
          }
          else
          {
            v16 = *(_QWORD *)(W32GetUserSessionState(v15, v7) + 19904);
            v10 = *(_QWORD *)(v16 + 4728);
            v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v17) + 19904) + 4728LL);
          }
          *(_DWORD *)(*a3 + 4) &= ~0x10000000u;
          goto LABEL_14;
        }
        v13 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904);
        v10 = *(_QWORD *)(v13 + 4856);
        v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v14) + 19904) + 4824LL);
      }
      else
      {
        v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904);
        v10 = *(_QWORD *)(v9 + 4824);
        v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v11) + 19904) + 4856LL);
      }
      *(_DWORD *)(*a3 + 4) |= 0x10000000u;
LABEL_14:
      v18 = *(_DWORD *)(*a3 + 64);
      v19 = *(_DWORD *)(*a3 + 68);
      v20 = *(_DWORD *)(*a3 + 72);
      v21 = *(_DWORD *)(*a3 + 76);
      v22 = GreSelectBrush(a1, v10);
      GrePatBlt(a1, v18, v19, v20 - 1, 1, 15728673);
      GrePatBlt(a1, v18, v19, 1, v21 - 1, 15728673);
      GreSelectBrush(a1, v12);
      GrePatBlt(a1, v18, v21 + v19 - 1, v20 - 1, 1, 15728673);
      GrePatBlt(a1, v20 + v18 - 1, v19, 1, v21, 15728673);
      return GreSelectBrush(a1, v22);
    }
  }
  return result;
}
