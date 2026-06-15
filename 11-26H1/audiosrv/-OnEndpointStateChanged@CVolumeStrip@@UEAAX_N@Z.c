/*
 * XREFs of ?OnEndpointStateChanged@CVolumeStrip@@UEAAX_N@Z @ 0x18011A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18004F7C0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVolumeStrip::OnEndpointStateChanged(CVolumeStrip *this, char a2)
{
  __int64 v3; // rcx

  if ( a2 )
  {
    if ( *((_BYTE *)this + 184) )
    {
      v3 = *((_QWORD *)this + 20);
      if ( v3 )
      {
        if ( *((_QWORD *)this + 21) )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 48LL))(*((_QWORD *)this + 21));
          CVolumeStrip::OnNotify(this, 0LL, (struct _GUID *)&stru_180194428);
        }
      }
    }
  }
}
