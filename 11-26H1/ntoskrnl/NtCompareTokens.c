/*
 * XREFs of NtCompareTokens @ 0x140A3D530
 * Callers:
 *     DifNtCompareTokensWrapper @ 0x140672E20 (DifNtCompareTokensWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SeCompareTokens @ 0x140A3BAE0 (SeCompareTokens.c)
 */

NTSTATUS __cdecl NtCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  PVOID v6; // rsi
  bool v7; // bl
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS v9; // r14d
  PVOID v10; // rdi
  PVOID Token; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  bool v14; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = 0;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Token = 0LL;
  v9 = ObReferenceObjectByHandle(FirstTokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v9 >= 0 )
  {
    if ( FirstTokenHandle == SecondTokenHandle )
    {
      v7 = 1;
      v10 = Token;
    }
    else
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(SecondTokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
      v6 = Object;
      v10 = Token;
      if ( v9 < 0 )
      {
        v6 = 0LL;
      }
      else if ( Token == Object )
      {
        v7 = 1;
      }
      else
      {
        v9 = SeCompareTokens((struct _KTHREAD *)Token, (struct _KTHREAD *)Object, &v14);
        v7 = v14;
      }
    }
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( PreviousMode )
    RtlWriteUCharToUser(Equal, v7);
  else
    *Equal = v7;
  return v9;
}
