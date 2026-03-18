/*
 * XREFs of ?RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z @ 0x1400B9364
 * Callers:
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall tagTHREADINFO::RemoveThreadFromQSharingLists(tagTHREADINFO *this, struct tagQ *a2)
{
  char v2; // r8
  tagTHREADINFO **v3; // r9
  char v4; // r10
  tagTHREADINFO *v5; // rax
  char v6; // r9
  tagTHREADINFO **i; // rdx
  tagTHREADINFO *v8; // rax

  v2 = 0;
  v3 = (tagTHREADINFO **)((char *)a2 + 528);
  v4 = 0;
  while ( 1 )
  {
    v5 = *v3;
    if ( !*v3 )
      break;
    if ( v5 == this )
    {
      v4 = 1;
      *v3 = (tagTHREADINFO *)*((_QWORD *)this + 211);
      *((_QWORD *)this + 211) = 0LL;
      break;
    }
    v3 = (tagTHREADINFO **)((char *)v5 + 1688);
  }
  v6 = 0;
  for ( i = (tagTHREADINFO **)((char *)a2 + 536); ; i = (tagTHREADINFO **)((char *)v8 + 1696) )
  {
    v8 = *i;
    if ( !*i )
      break;
    if ( v8 == this )
    {
      v6 = 1;
      *i = (tagTHREADINFO *)*((_QWORD *)this + 212);
      *((_QWORD *)this + 212) = 0LL;
      break;
    }
  }
  if ( v4 || v6 )
    return 1;
  return v2;
}
