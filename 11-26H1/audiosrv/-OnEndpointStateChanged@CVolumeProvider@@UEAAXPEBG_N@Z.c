/*
 * XREFs of ?OnEndpointStateChanged@CVolumeProvider@@UEAAXPEBG_N@Z @ 0x18011AF70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3bd1e31e3986a958fa44b473c8d8c198_::operator() @ 0x18011AD78 (_lambda_3bd1e31e3986a958fa44b473c8d8c198_--operator().c)
 */

void __fastcall CVolumeProvider::OnEndpointStateChanged(CVolumeProvider *this, const unsigned __int16 *a2, char a3)
{
  RTL_SRWLOCK v3[3]; // [rsp+20h] [rbp-18h] BYREF
  const unsigned __int16 *v4; // [rsp+48h] [rbp+10h] BYREF
  char v5; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v5 = a3;
    v4 = a2;
    v3[0].Ptr = &v4;
    v3[1].Ptr = &v5;
    lambda_3bd1e31e3986a958fa44b473c8d8c198_::operator()(v3);
  }
}
