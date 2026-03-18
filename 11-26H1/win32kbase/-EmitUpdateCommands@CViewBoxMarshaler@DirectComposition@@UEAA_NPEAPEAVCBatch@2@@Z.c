/*
 * XREFs of ?EmitUpdateCommands@CViewBoxMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401729C0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_dd862a133fbcf6820f5014d20e4036af___ @ 0x140172ABC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_dd862a133fbcf6820f5014d20e4036a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74d20138f35096ed876432e29420d709___ @ 0x140172B34 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_74d20138f35096ed876432e29420d70.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_510ad0fdc6a4a65631513f99199301c6___ @ 0x14023E298 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_510ad0fdc6a4a65631513f99199301c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_656fcd5762369dd788581355f3f7a4ef___ @ 0x14023E310 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_656fcd5762369dd788581355f3f7a4e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e6a0e39a3eeee7e539b4e5382bb69da0___ @ 0x14023E384 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e6a0e39a3eeee7e539b4e5382bb69da.c)
 */

char __fastcall DirectComposition::CViewBoxMarshaler::EmitUpdateCommands(
        DirectComposition::CViewBoxMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CViewBoxMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_510ad0fdc6a4a65631513f99199301c6___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_dd862a133fbcf6820f5014d20e4036af___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_656fcd5762369dd788581355f3f7a4ef___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e6a0e39a3eeee7e539b4e5382bb69da0___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x400) == 0 )
    return 1;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74d20138f35096ed876432e29420d709___(
                          this,
                          a2,
                          &v7) )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return v3;
}
