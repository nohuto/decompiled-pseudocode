/*
 * XREFs of DwmAsyncChildStyleChange @ 0x14004F614
 * Callers:
 *     InternalInvalidate3 @ 0x140032DB8 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxCalcClientRect @ 0x140047B98 (xxxCalcClientRect.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x14004EE38 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     xxxDoPaint @ 0x14005138C (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140052E08 (xxxEndPaint.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402B4C40 (-OnDwmWindowNotificationClientRegistered@@YAJH@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _OWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+4Ch] [rbp-14h]
  int v14; // [rsp+54h] [rbp-Ch]
  int v15; // [rsp+58h] [rbp-8h]

  v8 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    v15 = a4;
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 3932180;
    v11 = 0LL;
    WORD2(v10[0]) = 0x8000;
    v12 = 1073741846;
    v13 = a2;
    v14 = a3;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
