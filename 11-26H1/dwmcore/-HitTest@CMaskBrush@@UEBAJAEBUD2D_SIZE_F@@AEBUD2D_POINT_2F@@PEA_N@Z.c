/*
 * XREFs of ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18019D430
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::HitTest(
        CMaskBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
  int v10; // eax
  int v11; // eax

  v4 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)this + 15);
  if ( v7 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD5u, 0LL);
    }
    else if ( *((_QWORD *)this + 14) )
    {
      if ( *a4 )
      {
        *a4 = 0;
        v11 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(**((_QWORD **)this + 14) + 216LL))(
                *((_QWORD *)this + 14),
                a2,
                a3,
                a4);
        v4 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xDBu, 0LL);
      }
    }
  }
  return v4;
}
