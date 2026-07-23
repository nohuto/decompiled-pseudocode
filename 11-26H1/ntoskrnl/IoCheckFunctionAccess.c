/*
 * XREFs of IoCheckFunctionAccess @ 0x140A83480
 * Callers:
 *     <none>
 * Callees:
 *     SeQuerySecurityAccessMask @ 0x140A83640 (SeQuerySecurityAccessMask.c)
 *     SeSetSecurityAccessMask @ 0x140A836A0 (SeSetSecurityAccessMask.c)
 */

NTSTATUS __stdcall IoCheckFunctionAccess(
        ACCESS_MASK GrantedAccess,
        UCHAR MajorFunction,
        UCHAR MinorFunction,
        ULONG IoControlCode,
        PVOID Arg1,
        PVOID Arg2)
{
  NTSTATUS v6; // r8d
  int v7; // eax
  char v8; // r10
  int v9; // r8d
  bool v11; // cf
  int v12; // r10d
  char v13; // r10
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v14 = 0;
  if ( MajorFunction > 0xAu )
  {
    switch ( MajorFunction )
    {
      case 0xBu:
        if ( (~GrantedAccess & IopSetFsOperationAccess[*(int *)Arg2]) != 0 )
          return -1073741790;
        return v6;
      case 0xCu:
        goto LABEL_45;
      case 0xDu:
      case 0xEu:
      case 0xFu:
        if ( (IoControlCode & 0xC000) != 0
          && ((unsigned __int8)(IoControlCode >> 14) & (unsigned __int8)GrantedAccess & 3) == 0 )
        {
          return -1073741790;
        }
        return v6;
      case 0x11u:
        v8 = GrantedAccess & 3;
LABEL_20:
        v9 = -(v8 == 0);
        return v9 & 0xC0000022;
      case 0x14u:
        SeQuerySecurityAccessMask(*(unsigned int *)Arg1, &v14, 0LL, IoControlCode);
        break;
      case 0x15u:
        SeSetSecurityAccessMask(*(unsigned int *)Arg1, &v14);
        break;
      default:
        return -1073741808;
    }
    v11 = (v14 & ~v12) != 0;
LABEL_29:
    v9 = -v11;
    return v9 & 0xC0000022;
  }
  switch ( MajorFunction )
  {
    case 0xAu:
      v11 = (~GrantedAccess & IopQueryFsOperationAccess[*(int *)Arg2]) != 0;
      goto LABEL_29;
    case 0u:
    case 2u:
      return v6;
    case 3u:
LABEL_45:
      v13 = (GrantedAccess & 1) == 0;
      goto LABEL_38;
    case 4u:
      v8 = GrantedAccess & 6;
      goto LABEL_20;
    case 5u:
      v7 = IopQueryOperationAccess[*(int *)Arg1];
      goto LABEL_10;
  }
  if ( MajorFunction != 6 )
  {
    switch ( MajorFunction )
    {
      case 7u:
        v13 = ~(_BYTE)GrantedAccess & 8;
        goto LABEL_38;
      case 8u:
        v13 = ~(_BYTE)GrantedAccess & 0x10;
        goto LABEL_38;
      case 9u:
        v13 = ~(_BYTE)GrantedAccess & 2;
LABEL_38:
        v11 = v13 != 0;
        goto LABEL_29;
    }
    return -1073741808;
  }
  v7 = IopSetOperationAccess[*(int *)Arg1];
LABEL_10:
  if ( v7 && (~GrantedAccess & v7) != 0 )
    return -1073741790;
  return v6;
}
