/*
 * XREFs of ObpInsertHandleCount @ 0x140A51B44
 * Callers:
 *     ObpLockHandleDataBaseEntry @ 0x140A519A0 (ObpLockHandleDataBaseEntry.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x14043CFE0 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char *__fastcall ObpInsertHandleCount(__int64 a1)
{
  int **v2; // rax
  int **v3; // r14
  unsigned int v4; // ebp
  int *v5; // r15
  int v6; // edi
  int v7; // r12d
  int *Pool2; // rax
  int *v9; // rsi
  char v10; // al
  char *result; // rax
  int v12; // eax
  _BYTE Src[24]; // [rsp+20h] [rbp-48h] BYREF

  memset(Src, 0, 20);
  v2 = (int **)OBJECT_HEADER_TO_HANDLE_INFO(a1);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    v4 = 24;
    *(_DWORD *)Src = 1;
    v5 = (int *)Src;
    *(_OWORD *)&Src[8] = *(_OWORD *)v2;
    v6 = 40;
    v7 = 2;
  }
  else
  {
    v5 = *v2;
    v12 = **v2;
    v4 = 16 * v12 + 8;
    v7 = v12 + 4;
    v6 = 16 * (v12 + 4) + 8;
  }
  Pool2 = (int *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, v5, v4);
  v10 = *(_BYTE *)(a1 + 27);
  if ( (v10 & 0x40) != 0 )
    *(_BYTE *)(a1 + 27) = v10 & 0xBF;
  else
    ExFreePoolWithTag(v5, 0);
  memset_0((char *)v9 + v4, 0, v6 - v4);
  *v9 = v7;
  result = (char *)v9 + v4;
  *v3 = v9;
  return result;
}
