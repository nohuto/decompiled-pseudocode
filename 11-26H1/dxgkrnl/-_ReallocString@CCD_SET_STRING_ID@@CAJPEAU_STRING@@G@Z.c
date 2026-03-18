/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x14033E0D0
 * Callers:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14033CF38 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x14033DF0C (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14033DF54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2)
{
  CHAR *v4; // rax
  CHAR *v5; // rbp
  __int64 result; // rax

  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v4 = (CHAR *)operator new[](a2, 0x63644356u, 256LL);
  v5 = v4;
  if ( v4 )
  {
    memmove(v4, a1->Buffer, a1->Length);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1->Buffer);
    a1->Buffer = v5;
    a1->MaximumLength = a2;
    return 0LL;
  }
  WdLogSingleEntry1(6LL);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 1863;
  return result;
}
