/*
 * XREFs of GreSetBitmapOwner @ 0x140026C00
 * Callers:
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetBitmapOwner(HSURF a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int *v10; // rax
  __int64 SessionState; // rax
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-28h]
  __int64 *v15; // [rsp+30h] [rbp-20h]
  __int64 (__fastcall *v16)(); // [rsp+38h] [rbp-18h]
  unsigned int *v17; // [rsp+40h] [rbp-10h]

  v2 = a2;
  v3 = 0;
  v13 = 0LL;
  v14 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  v15 = &v13;
  v16 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
  if ( ((v6 + 8) & -(__int64)(v6 != 0)) != 0 )
  {
    v7 = *(_QWORD *)(((v6 + 8) & -(__int64)(v6 != 0)) + 0x58);
    if ( *(_QWORD *)(v7 + 8) != ((v6 + 8) & -(__int64)(v6 != 0)) + 88 )
      __fastfail(3u);
    v13 = *(_QWORD *)(((v6 + 8) & -(__int64)(v6 != 0)) + 0x58);
    v14 = (__int64 *)(((v6 + 8) & -(__int64)(v6 != 0)) + 88);
    *(_QWORD *)(v7 + 8) = &v13;
    *(_QWORD *)(((v6 + 8) & -(__int64)(v6 != 0)) + 0x58) = &v13;
  }
  else
  {
    v14 = &v13;
    v13 = (__int64)&v13;
  }
  v17 = 0LL;
  SURFREF::vLock((SURFREF *)&v13, a1);
  v10 = v17;
  if ( v17 )
  {
    if ( (*((_WORD *)v17 + 50) || !*((_QWORD *)v17 + 24) || v2) && ((unsigned int)a1 & 0x800000) == 0 )
    {
      LOBYTE(v9) = 5;
      v3 = HmgSetOwner(a1, v2, v9);
      v10 = v17;
    }
    if ( v10 )
    {
      SessionState = W32GetSessionState(v8);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v17);
    }
  }
  PopThreadGuardedObject(&v13);
  return v3;
}
