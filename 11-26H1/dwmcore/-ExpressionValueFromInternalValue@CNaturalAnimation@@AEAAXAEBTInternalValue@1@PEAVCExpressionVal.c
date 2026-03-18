/*
 * XREFs of ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXAEBTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x18027B38C
 * Callers:
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801E2D00 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 *     ?GetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027B660 (-GetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x18021B54C (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CNaturalAnimation::ExpressionValueFromInternalValue(
        CNaturalAnimation *this,
        const union CNaturalAnimation::InternalValue *a2,
        struct CExpressionValue *a3,
        const char *a4)
{
  int v7; // eax
  int v8; // xmm6_4
  int v9[20]; // [rsp+20h] [rbp-78h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v9[16] = 0;
  CExpressionValue::operator=(a3, v9, (__int64)a3, a4);
  CExpressionValue::DestroyCurrent((CExpressionValue *)v9);
  v7 = *((_DWORD *)this + 38);
  switch ( v7 )
  {
    case 18:
      v8 = *(_DWORD *)a2;
      CExpressionValue::DestroyCurrent(a3);
      *(_DWORD *)a3 = v8;
      *((_DWORD *)a3 + 16) = 18;
      break;
    case 35:
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 35;
      *(_QWORD *)a3 = *(_QWORD *)a2;
      break;
    case 52:
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *((_DWORD *)a3 + 2) = *((_DWORD *)a2 + 2);
      break;
    default:
      ModuleFailFastForHRESULT(-2147467259, retaddr);
  }
}
