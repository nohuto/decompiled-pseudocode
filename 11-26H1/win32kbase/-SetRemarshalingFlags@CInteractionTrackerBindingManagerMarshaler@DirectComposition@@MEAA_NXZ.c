/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x140244570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A50 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this)
{
  char v1; // bl
  unsigned int v3; // esi
  __int64 v4; // rcx
  size_t v5; // r8
  _QWORD *v6; // rcx
  __int128 v7; // xmm0
  unsigned __int64 v8; // rax
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = 0;
  if ( *((_QWORD *)this + 12) )
  {
    v4 = 0LL;
    do
    {
      v5 = *((_QWORD *)this + 13);
      v6 = (_QWORD *)(*((_QWORD *)this + 9) + v5 * v4);
      v7 = *(_OWORD *)v6;
      v11 = (unsigned int)v6[2];
      Src = v7;
      memmove(v6, &Src, v5);
      v8 = *((_QWORD *)this + 12);
      v4 = ++v3;
    }
    while ( v3 < v8 );
    if ( v8 )
      *((_DWORD *)this + 4) = *((_DWORD *)this + 4) & 0xFFFFFF5F | 0x80;
  }
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    return 1;
  }
  return v1;
}
