/*
 * XREFs of ?_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z @ 0x1402CBBF4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _DwmAsyncClearTaggedWindowRect(const struct tagWND *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbp
  void *v6; // rdi
  unsigned int v7; // esi
  _OWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-28h]

  v2 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v5 = *(_QWORD *)a1;
    v6 = (void *)ReferenceDwmApiPort(v4, v3);
    v7 = -1073741823;
    if ( v6 )
    {
      memset(v9, 0, sizeof(v9));
      v10[0] = 0LL;
      LODWORD(v9[0]) = 3407884;
      WORD2(v9[0]) = 0x8000;
      LODWORD(v10[1]) = 1073741914;
      *(_QWORD *)((char *)&v10[1] + 4) = v5;
      v7 = LpcRequestPort(v6, v9);
      ObfDereferenceObject(v6);
    }
    return v7;
  }
  return v2;
}
