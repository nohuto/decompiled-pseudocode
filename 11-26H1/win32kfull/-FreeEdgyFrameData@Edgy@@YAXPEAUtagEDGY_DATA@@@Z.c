/*
 * XREFs of ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1402C2D10
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::FreeEdgyFrameData(Edgy *this, struct tagEDGY_DATA *a2)
{
  __int64 v2; // rbx
  struct _LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *v6; // rax
  __int64 UserSessionState; // rax

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    v4 = (struct _LIST_ENTRY *)(v2 + 1272);
    while ( v4->Flink != v4 )
    {
      Blink = v4->Blink;
      if ( Blink->Flink != v4 || (v6 = Blink->Blink, v6->Flink != Blink) )
        __fastfail(3u);
      v4->Blink = v6;
      v6->Flink = v4;
      Blink->Blink = Blink;
      Blink->Flink = Blink;
      UserSessionState = W32GetUserSessionState(this, a2);
      CTouchProcessor::UnreferenceUndispatchedFrame(*(CTouchProcessor **)(UserSessionState + 3256), Blink);
    }
    *((_QWORD *)this + 36) = 0LL;
    *((_DWORD *)this + 4) = 0;
  }
}
