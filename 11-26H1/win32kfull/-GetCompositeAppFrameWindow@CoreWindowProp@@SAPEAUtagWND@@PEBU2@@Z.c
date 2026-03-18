/*
 * XREFs of ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046210
 * Callers:
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::operator() @ 0x14015BAAC (_lambda_1a8a671d465f8785bc97c99107a222a3_--operator().c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046254 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindow(const struct tagWND *a1)
{
  struct tagWND *result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  result = CoreWindowProp::GetTopLevelHostForComponent(a1);
  if ( result )
  {
    do
    {
      v2 = *((_QWORD *)result + 13);
      if ( v2 )
      {
        v3 = *((_QWORD *)result + 3);
        if ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 8);
          if ( v4 )
          {
            if ( v2 == *(_QWORD *)(v4 + 24) )
              break;
          }
        }
      }
      result = (struct tagWND *)*((_QWORD *)result + 13);
    }
    while ( v2 );
  }
  return result;
}
