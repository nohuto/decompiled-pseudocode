/*
 * XREFs of CopyObjBuffer @ 0x140010868
 * Callers:
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     Store @ 0x140013D20 (Store.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall CopyObjBuffer(void *a1, size_t Size, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // esi
  int v7; // r8d
  const void *v8; // rdi
  unsigned int v9; // ebx
  int v11; // r8d
  const void *ObjectTypeName; // rax

  v4 = Size;
  v5 = 0;
  v7 = *(unsigned __int16 *)(a3 + 2) - 1;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        LogError(-1072431095);
        AcpiDiagTraceAmlError(0LL, -1072431095);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
        PrintDebugMessage(0x1Eu, ObjectTypeName, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431095;
      }
      v8 = *(const void **)(a3 + 32);
      v9 = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v8 = *(const void **)(a3 + 32);
      v9 = *(_DWORD *)(a3 + 24) - 1;
    }
  }
  else
  {
    v8 = (const void *)(a3 + 16);
    v9 = 8;
  }
  if ( a1 != v8 )
  {
    memset(a1, 0, (unsigned int)Size);
    if ( v4 <= v9 )
      v9 = v4;
    memmove(a1, v8, v9);
  }
  return v5;
}
