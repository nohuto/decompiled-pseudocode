/*
 * XREFs of ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1401562D0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z @ 0x140156330 (-ClearSystemVisual@CHwndTargetProp@@QEAAHW4_HwndTargetType@@@Z.c)
 */

void __fastcall CHwndTargetProp::Delete(char *Buffer)
{
  int i; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rcx

  for ( i = 0; i < 3; ++i )
    CHwndTargetProp::ClearSystemVisual(Buffer, (unsigned int)i);
  v6 = (void *)*((_QWORD *)Buffer + 9);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)Buffer + 9) = 0LL;
  }
  GreDeleteFastMutex(Buffer, v3, v4, v5);
}
