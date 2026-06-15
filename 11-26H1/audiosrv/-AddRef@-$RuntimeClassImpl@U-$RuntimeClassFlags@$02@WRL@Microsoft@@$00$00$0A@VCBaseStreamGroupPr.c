/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005C750
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800FA820 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBase_ea_1800FA820.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800FA830 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBase_ea_1800FA830.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBGA@EAAKXZ @ 0x1800FA840 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBase_ea_1800FA840.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBGI@EAAKXZ @ 0x1800FA860 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBase_ea_1800FA860.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  signed __int32 v3; // r9d
  unsigned int v4; // r9d
  bool v6; // zf
  signed __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 376);
  v2 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v2;
    v4 = v1 + 1;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 376), v1 + 1, v1);
    v6 = v1 == v7;
    v1 = v7;
    if ( v6 )
      return v4;
  }
  while ( 1 )
  {
    v3 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v3 == 0x7FFFFFFF )
      break;
    if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v3 + 1, v3) )
      return (unsigned int)(v3 + 1);
  }
  return v2;
}
