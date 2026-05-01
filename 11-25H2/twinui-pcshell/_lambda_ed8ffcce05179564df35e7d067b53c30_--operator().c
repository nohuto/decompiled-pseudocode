/*
 * XREFs of _lambda_ed8ffcce05179564df35e7d067b53c30_::operator() @ 0x180523874
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___::OnStoryboardStatusChanged @ 0x180523DA0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_180523DA0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___::OnStoryboardStatusChanged @ 0x180523EF0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_180523EF0.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___::OnStoryboardStatusChanged @ 0x180524010 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_180524010.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_ed8ffcce05179564df35e7d067b53c30_::operator()(_QWORD *a1, char a2)
{
  _BYTE *v3; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184LL) + 72LL))(*(_QWORD *)(*a1 + 184LL), 0LL);
    v3 = (_BYTE *)a1[1];
    LOBYTE(v3) = *v3;
    return (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(*a1 + 184LL) + 160LL))(
             *(_QWORD *)(*a1 + 184LL),
             v3);
  }
  return result;
}
