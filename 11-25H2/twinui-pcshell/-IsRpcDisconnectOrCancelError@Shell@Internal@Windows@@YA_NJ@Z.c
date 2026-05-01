/*
 * XREFs of ?IsRpcDisconnectOrCancelError@Shell@Internal@Windows@@YA_NJ@Z @ 0x1805B0E90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z @ 0x18055DA38 (-IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z.c)
 */

char __fastcall Windows::Internal::Shell::IsRpcDisconnectOrCancelError(Windows::Internal::Shell *this)
{
  int v1; // ebx
  bool IsRpcDisconnectError; // al
  char v3; // dl

  v1 = (int)this;
  IsRpcDisconnectError = Windows::Internal::Shell::IsRpcDisconnectError(this);
  v3 = 0;
  if ( IsRpcDisconnectError || v1 == -2147418110 )
    return 1;
  return v3;
}
