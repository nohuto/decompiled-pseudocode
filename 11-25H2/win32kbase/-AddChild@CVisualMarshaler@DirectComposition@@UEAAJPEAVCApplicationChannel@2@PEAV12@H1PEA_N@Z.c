/*
 * XREFs of ?AddChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@H1PEA_N@Z @ 0x140021850
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::AddChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        int a4,
        struct DirectComposition::CVisualMarshaler *a5,
        bool *a6)
{
  unsigned int v6; // edi
  _QWORD *i; // rax

  v6 = 0;
  *a6 = 0;
  if ( *((_QWORD *)a3 + 24) || a5 && *((DirectComposition::CVisualMarshaler **)a5 + 24) != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( a4 )
    {
      if ( a5 )
      {
        *((_QWORD *)a3 + 23) = *((_QWORD *)a5 + 23);
        *((_QWORD *)a5 + 23) = a3;
      }
      else
      {
        *((_QWORD *)a3 + 23) = *((_QWORD *)this + 22);
        *((_QWORD *)this + 22) = a3;
      }
    }
    else
    {
      for ( i = (_QWORD *)((char *)this + 176);
            (struct DirectComposition::CVisualMarshaler *)*i != a5;
            i = (_QWORD *)(*i + 184LL) )
      {
        ;
      }
      *((_QWORD *)a3 + 23) = a5;
      *i = a3;
    }
    DirectComposition::CResourceMarshaler::AddRef(a3);
    (*(void (__fastcall **)(struct DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, DirectComposition::CVisualMarshaler *))(*(_QWORD *)a3 + 8LL))(
      a3,
      a2,
      this);
    *((_DWORD *)this + 4) |= 0x4000u;
    *a6 = 1;
  }
  return v6;
}
