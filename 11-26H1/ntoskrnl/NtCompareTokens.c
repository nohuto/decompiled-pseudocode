/*
 * XREFs of NtCompareTokens @ 0x140A2A4A0
 * Callers:
 *     DifNtCompareTokensWrapper @ 0x14066F240 (DifNtCompareTokensWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeCompareTokens @ 0x140A28A40 (SeCompareTokens.c)
 */

__int64 __fastcall NtCompareTokens(void *a1, void *a2, char *a3)
{
  PVOID v6; // rsi
  char v7; // bl
  KPROCESSOR_MODE PreviousMode; // r12
  int v9; // r14d
  PVOID v10; // rdi
  PVOID Token; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  char v14; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = 0;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Token = 0LL;
  v9 = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v9 >= 0 )
  {
    if ( a1 == a2 )
    {
      v7 = 1;
      v10 = Token;
    }
    else
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(a2, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
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
        v9 = SeCompareTokens((struct _KTHREAD *)Token, (struct _KTHREAD *)Object, (bool *)&v14);
        v7 = v14;
      }
    }
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( PreviousMode )
    RtlWriteUCharToUser(a3, v7);
  else
    *a3 = v7;
  return (unsigned int)v9;
}
