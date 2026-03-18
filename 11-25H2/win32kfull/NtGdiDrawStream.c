/*
 * XREFs of NtGdiDrawStream @ 0x14018A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z @ 0x140330900 (--$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z.c)
 *     ??$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z @ 0x1403310AC (--$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z.c)
 *     Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledDeviceUsageNoInline @ 0x1403318C8 (Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiDrawStream(HDC a1, size_t Size, char *Src)
{
  size_t v4; // rsi
  unsigned int v6; // edi
  _BYTE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  _BYTE v12[256]; // [rsp+30h] [rbp-138h] BYREF

  v4 = (unsigned int)Size;
  v6 = 0;
  v7 = 0LL;
  if ( (unsigned int)Size <= 0x100 )
  {
    v7 = v12;
  }
  else
  {
    if ( (unsigned int)Size > 0x2710000 )
      goto LABEL_13;
    v7 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( !v7 )
      goto LABEL_13;
  }
  if ( &Src[v4] < Src || (unsigned __int64)&Src[v4] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v7, Src, v4);
  if ( (unsigned int)Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledDeviceUsageNoInline(v9, v8) )
    v10 = GreDrawStream<APIDCOBJ_NoOp_vUnlock,1>(a1);
  else
    v10 = GreDrawStream<XDCOBJ_NoCtor,0>(a1, (unsigned int)v4, v7);
  v6 = v10;
LABEL_13:
  if ( v7 && v7 != v12 )
    FreeTmpBuffer(v7);
  return v6;
}
