/*
 * XREFs of ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800295A8
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180034670 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowData::IsSimpleClientArea(CWindowData *this)
{
  char v1; // bl
  struct _RTL_GENERIC_TABLE *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v8; // [rsp+30h] [rbp-58h]
  __int128 v9; // [rsp+40h] [rbp-48h]
  __int128 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+60h] [rbp-28h]
  char v12; // [rsp+68h] [rbp-20h]
  __int128 v13; // [rsp+70h] [rbp-18h]

  v1 = 0;
  if ( (*((_BYTE *)this + 737) & 0x10) == 0 && (*((_BYTE *)this + 739) & 0x20) == 0 && !*((_DWORD *)this + 140) )
  {
    if ( !*((_QWORD *)this + 53) )
      return 1;
    Buffer[0] = *((_QWORD *)this + 17);
    Buffer[1] = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v4 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 8LL);
    v10 = 0LL;
    v11 = -1LL;
    v12 = 0;
    v13 = 0LL;
    v5 = RtlLookupElementGenericTable(v4, Buffer);
    v6 = v5 ? v5[8] : 0LL;
    if ( *((_QWORD *)this + 5) == v6 )
      return 1;
  }
  return v1;
}
