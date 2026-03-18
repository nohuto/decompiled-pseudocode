/*
 * XREFs of ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180188DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedImageProducer::GetDeviceTexture(
        CCachedImageProducer *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  _QWORD **v4; // rbx
  _QWORD **v6; // rdi
  char v7; // bp
  int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v11; // r14
  __int64 v12; // rax
  int v13; // ecx
  __int64 *v14; // rcx
  __int64 v15; // rdx
  int v17; // eax
  unsigned int v18; // edi
  _BYTE v19[56]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (_QWORD **)*((_QWORD *)this + 2);
  v6 = (_QWORD **)*((_QWORD *)this + 3);
  v7 = *((_BYTE *)g_pComposition + 6458);
  while ( 1 )
  {
    if ( v4 == v6 )
    {
      v8 = -2147020579;
      v9 = 86LL;
      goto LABEL_4;
    }
    v11 = *v4;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)**v4 + 88LL))(**v4, v19);
    if ( *(_DWORD *)v12 == *(_DWORD *)a2 && *(_DWORD *)(v12 + 4) == *((_DWORD *)a2 + 1) )
    {
      v13 = *(_DWORD *)(v12 + 8);
      if ( (v13 == -1 || v13 == *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 2) == -3)
        && (*(float *)(v12 + 16) != 0.0) == (*((float *)a2 + 4) != 0.0)
        && (!*(_BYTE *)(v12 + 20) || *((_BYTE *)a2 + 20)) )
      {
        v14 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 144LL))(*v11);
        v15 = *v14;
        if ( !(v7
             ? (*(__int64 (__fastcall **)(__int64 *))(v15 + 160))(v14)
             : (*(unsigned __int8 (__fastcall **)(__int64 *))(v15 + 176))(v14)) )
          break;
      }
    }
    ++v4;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v4 + 24LL))(**v4);
  v18 = v17;
  if ( v17 >= 0 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        *((float *)a2 + 4)
                      - *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)**v4 + 88LL))(**v4, v19) + 16)) & _xmm) > 0.0000011920929 )
    {
      v8 = -2003292412;
      v9 = 77LL;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(**v4 + 8LL) + 104LL))(
             **v4 + 8LL,
             a2,
             a3);
      if ( v8 >= 0 )
        return 0LL;
      v9 = 80LL;
    }
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
