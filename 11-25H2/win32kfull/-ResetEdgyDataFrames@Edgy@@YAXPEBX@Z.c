/*
 * XREFs of ?ResetEdgyDataFrames@Edgy@@YAXPEBX@Z @ 0x1402A59B4
 * Callers:
 *     EditionEdgyResetDataFrames @ 0x1402A66F0 (EditionEdgyResetDataFrames.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::ResetEdgyDataFrames(Edgy *this, const void *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 19144) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19144);
    if ( *(_QWORD *)(v5 + 248) )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144);
      if ( *(Edgy **)(*(_QWORD *)(v8 + 248) + 224LL) == this )
      {
        v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19144);
        *(_QWORD *)(*(_QWORD *)(v8 + 248) + 224LL) = 0LL;
      }
      v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19144);
      if ( *(Edgy **)(*(_QWORD *)(v10 + 248) + 232LL) == this )
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19144) + 248LL) + 232LL) = 0LL;
    }
  }
}
