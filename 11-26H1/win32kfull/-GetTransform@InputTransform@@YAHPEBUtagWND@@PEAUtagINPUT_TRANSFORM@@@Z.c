/*
 * XREFs of ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1401BBB6C
 * Callers:
 *     EditionGetInputTransform @ 0x14025DC70 (EditionGetInputTransform.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall InputTransform::GetTransform(
        InputTransform *this,
        const struct tagWND *a2,
        struct tagINPUT_TRANSFORM *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  CompositionInputObject *v7; // rcx
  __int64 result; // rax
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-48h]
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-18h]
  const struct CInputSink *v16; // [rsp+80h] [rbp+18h] BYREF

  if ( !(unsigned __int8)IsInputThread(this, a2, a3) )
  {
    v9 = PtiCurrent(v5);
    if ( v9 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v11, v10) + 18872) )
      return 0LL;
  }
  v6 = *((_QWORD *)this + 34);
  if ( !v6 )
    return 0LL;
  v7 = *(CompositionInputObject **)(v6 + 96);
  if ( !v7 )
    return 0LL;
  v16 = 0LL;
  if ( (int)CompositionInputObject::LockForRead(v7, &v16) < 0 )
    return 0LL;
  v12 = *(_OWORD *)((char *)v16 + 88);
  v13 = *(_OWORD *)((char *)v16 + 104);
  v14 = *(_OWORD *)((char *)v16 + 120);
  v15 = *(_OWORD *)((char *)v16 + 136);
  CInputSink::UnlockAndRelease(v16);
  result = 1LL;
  *(_OWORD *)a2 = v12;
  *((_OWORD *)a2 + 1) = v13;
  *((_OWORD *)a2 + 2) = v14;
  *((_OWORD *)a2 + 3) = v15;
  return result;
}
