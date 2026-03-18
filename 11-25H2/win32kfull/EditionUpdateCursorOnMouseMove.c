/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x14004B1C0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1401F413C (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // r14
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  void *v10; // rax
  __int64 *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+4Ch] [rbp+14h]

  v13 = HIDWORD(a2);
  v4 = (__int64 *)(W32GetUserSessionState(a1, a2) + 36264);
  if ( *v4
    && (unsigned int)IsToplevelWindowDesktopComposed(*v4)
    && (a1 != *v4 || PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2)) )
  {
    v10 = (void *)ReferenceDwmApiPort();
    DwmAsyncTopLevelMouseLeave(v10);
  }
  v5 = *(_DWORD **)(a1 + 40);
  if ( (int)a2 < v5[26] || (int)a2 >= v5[28] || v13 < v5[27] || v13 >= v5[29] )
  {
    v11 = v4;
    v12 = a1;
    HMAssignmentLock(&v11, 1LL);
  }
  else
  {
    HMAssignmentUnlock(v4);
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  v12 = a1;
  v11 = (__int64 *)(UserSessionState + 36256);
  return HMAssignmentLock(&v11, 1LL);
}
