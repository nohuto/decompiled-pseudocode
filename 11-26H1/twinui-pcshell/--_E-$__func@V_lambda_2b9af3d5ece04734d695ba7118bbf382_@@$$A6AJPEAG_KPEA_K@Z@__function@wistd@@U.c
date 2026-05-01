/*
 * XREFs of ??_E?$__func@V_lambda_2b9af3d5ece04734d695ba7118bbf382_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18044B010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_2b9af3d5ece04734d695ba7118bbf382_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
