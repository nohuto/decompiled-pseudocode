/*
 * XREFs of ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18003FE84
 * Callers:
 *     ??1InputSiteElementProxy@@UEAA@XZ @ 0x18003FC1C (--1InputSiteElementProxy@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18002AE40 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     std::find_if_InputSite::AttachedInputObjectEntry____lambda_4edb7c407ffe7f35937f17f6fb9e42e7___ @ 0x18003FF50 (std--find_if_InputSite--AttachedInputObjectEntry____lambda_4edb7c407ffe7f35937f17f6fb9e42e7___.c)
 *     ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x180040004 (--$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjec.c)
 *     _lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_ @ 0x180040060 (_lambda_4edb7c407ffe7f35937f17f6fb9e42e7_--operator()_InputSite--AttachedInputObjectEntry_.c)
 */

void __fastcall InputSite::RemoveAllObjectsForElement(InputSite *this, struct InputSiteElementProxy *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 i; // rbx
  struct InputSiteElementProxy **v10; // [rsp+40h] [rbp+8h] BYREF
  struct InputSiteElementProxy *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (_QWORD *)*((_QWORD *)this + 62);
  v10 = &v11;
  v4 = std::find_if_InputSite::AttachedInputObjectEntry____lambda_4edb7c407ffe7f35937f17f6fb9e42e7___(
         *((_QWORD *)this + 61),
         v2,
         &v11);
  v5 = (_QWORD *)v4;
  if ( (_QWORD *)v4 != v2 )
  {
    while ( 1 )
    {
      v4 += 16LL;
      if ( (_QWORD *)v4 == v2 )
        break;
      if ( !(unsigned __int8)lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_(
                               &v10,
                               v4) )
      {
        *v5 = *(_QWORD *)v4;
        Microsoft::WRL::ComPtr<InputSite>::operator=(v5 + 1, (char *)(v4 + 8));
        v5 += 2;
      }
    }
  }
  if ( v5 != v2 )
  {
    v6 = std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
           v2,
           *((_QWORD *)this + 62),
           v5);
    v7 = *((_QWORD *)this + 62);
    v8 = v6;
    for ( i = v6; i != v7; i += 16LL )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(i + 8));
    *((_QWORD *)this + 62) = v8;
  }
}
