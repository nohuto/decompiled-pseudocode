/*
 * XREFs of SeCopyClientToken @ 0x1409025C0
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x1408165B4 (SepCopyClientTokenAndSetSilo.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCopyClientToken(int a1, int a2, __int64 a3, char a4, unsigned __int8 *Src, PVOID *a6)
{
  int inserted; // ebx
  _QWORD *v9; // rbx
  void *v10; // rsi
  void *v11; // rcx
  _QWORD *v12; // rdi
  unsigned int v13; // ebp
  void *Pool2; // rax
  unsigned int v15; // ecx
  __int64 v16; // r8
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v18[4]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v19; // [rsp+68h] [rbp-20h]

  v18[0] = 48LL;
  memset(&v18[1], 0, 24);
  Object = 0LL;
  v19 = 0LL;
  inserted = SepDuplicateToken(a1, (unsigned int)v18, 0, 2, a2, 0, 0, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_2;
  if ( !a4 )
    goto LABEL_10;
  v9 = Object;
  v10 = 0LL;
  if ( Src )
  {
    v13 = 4 * Src[1] + 8;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      inserted = -1073741670;
      goto LABEL_9;
    }
    v15 = 4 * Src[1] + 8;
    if ( v15 <= v13 )
      memmove(Pool2, Src, v15);
  }
  v11 = (void *)v9[138];
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v9[138] = v10;
  inserted = 0;
LABEL_9:
  if ( inserted < 0 )
  {
LABEL_2:
    *a6 = 0LL;
    return (unsigned int)inserted;
  }
LABEL_10:
  inserted = ObInsertObjectEx(Object, 0LL, 0LL, 0LL, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_2;
  v12 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v16 = *((_QWORD *)Object + 98);
    if ( v16 )
    {
      inserted = SepAppendAceToTokenObjectAcl(Object, 983551LL, v16);
      if ( inserted < 0 )
      {
        ObfDereferenceObject(Object);
        goto LABEL_2;
      }
      v12 = Object;
    }
  }
  if ( (int)SepAppendAceToTokenObjectAcl(v12, 8LL, SeAliasAdminsSid) >= 0 )
    SepSetProcessTrustLabelAceForToken(v12);
  *a6 = Object;
  return (unsigned int)inserted;
}
