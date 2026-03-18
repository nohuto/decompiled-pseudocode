/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1401D64DC
 * Callers:
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x14004E1DC (InternalBeginDeferWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall xxxProcessSetWindowPosEvent(__int64 a1, __int64 a2)
{
  void **v3; // rsi
  __int64 v4; // rdx
  int v5; // eax
  __int64 *v6; // rbx
  int i; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx

  v3 = (void **)InternalBeginDeferWindowPos(*(unsigned int *)(a1 + 28), a2);
  if ( v3 )
  {
    memmove(v3[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v5 = *(_DWORD *)(a1 + 28);
    v6 = (__int64 *)v3[5];
    *((_DWORD *)v3 + 7) = v5;
    for ( i = v5 - 1; i >= 0; --i )
    {
      if ( (*((_DWORD *)v6 + 39) & 0x20) != 0 )
      {
        if ( *v6 )
        {
          LOBYTE(v4) = 1;
          v8 = HMValidateHandleNoSecure(*v6, v4);
          if ( v8 )
          {
            v9 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 256LL);
            if ( v9 != v6[16] )
              v6[16] = v9;
          }
        }
      }
      v6 += 21;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v3, 0LL);
  }
  Win32FreePool((void *)a1);
}
