/*
 * XREFs of ?GetDisplayId@CAtlasBitmapResource@@UEBA?AVDisplayId@@XZ @ 0x18028AE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall CAtlasBitmapResource::GetDisplayId(__int64 a1, int *a2)
{
  __int64 v2; // rax
  int v4; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) + 56LL))(
      *(_QWORD *)(v2 + 8) + 8LL,
      &v6);
    v4 = v6;
  }
  else
  {
    v4 = -2;
  }
  *a2 = v4;
  return a2;
}
