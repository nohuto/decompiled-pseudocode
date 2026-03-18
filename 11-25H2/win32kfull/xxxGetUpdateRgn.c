/*
 * XREFs of xxxGetUpdateRgn @ 0x14004DED0
 * Callers:
 *     NtUserGetUpdateRgn @ 0x14004DE20 (NtUserGetUpdateRgn.c)
 * Callees:
 *     IntersectWithParents @ 0x14003192C (IntersectWithParents.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     MirrorRegion @ 0x14004E3F4 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRgn(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 UserSessionState; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int128 v20; // [rsp+20h] [rbp-20h] BYREF

  v20 = 0LL;
  if ( a3 )
    xxxSimpleDoSyncPaint(a1);
  SetOrClrWF(0, a1, 0x120u, 1);
  v5 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v5 + 136) )
  {
    v20 = *(_OWORD *)(v5 + 104);
    v6 = IntersectWithParents((__int64)a1, (int *)&v20);
    v8 = *((_QWORD *)a1 + 5);
    if ( *(_QWORD *)(v8 + 136) == 1LL )
    {
      if ( v6 )
      {
        v14 = 2;
        if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
        {
          v17 = *(_DWORD *)(v16 + 104);
          v18 = -*(_DWORD *)(v16 + 108);
          HIDWORD(v20) -= *(_DWORD *)(v16 + 108);
          v19 = -v17;
          LODWORD(v20) = v19 + v20;
          DWORD2(v20) += v19;
          DWORD1(v20) += v18;
        }
        SetRectRgnIndirect(a2, &v20);
        goto LABEL_8;
      }
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v7, v8);
      SetRectRgnIndirect(*(_QWORD *)(UserSessionState + 63376), &v20);
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
      v13 = W32GetUserSessionState(v12, v11);
      v14 = GreCombineRgn(a2, *(_QWORD *)(v13 + 63376), v10, 1LL);
      if ( v14 >= 2 )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
          GreOffsetRgn(
            a2,
            (unsigned int)-*(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
            (unsigned int)-*(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
LABEL_8:
        MirrorRegion(a1, a2, 1LL);
        return v14;
      }
    }
  }
  SetEmptyRgn(a2);
  return 1LL;
}
