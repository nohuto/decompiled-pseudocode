/*
 * XREFs of ??1CScalarForce@@EEAA@XZ @ 0x1801DB880
 * Callers:
 *     ??_ECScalarForce@@EEAAPEAXI@Z @ 0x18028E730 (--_ECScalarForce@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScalarForce::~CScalarForce(CScalarForce *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
