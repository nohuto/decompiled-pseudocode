/*
 * XREFs of ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140102548
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitCreationCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  struct DirectComposition::CResourceMarshaler *v3; // rbx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  unsigned int v8; // ecx
  __int64 i; // rax
  __int64 v10; // rcx

  v3 = *a3;
  if ( *a3 )
  {
    do
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)v3 + 48LL))(
              v3,
              a2) )
        break;
      *((_DWORD *)v3 + 4) |= 1u;
      v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v3 + 1);
      if ( (*((_DWORD *)v3 + 4) & 2) != 0 )
      {
        v8 = *((_DWORD *)v3 + 9);
        for ( i = v8; (unsigned int)i < 0xA6; LODWORD(i) = dword_14027CC90[i] )
        {
          if ( (_DWORD)i == 133 )
          {
            v10 = 456LL;
            goto LABEL_12;
          }
        }
        while ( 1 )
        {
          if ( v8 >= 0xA6 )
          {
            v10 = 440LL;
            goto LABEL_12;
          }
          if ( v8 == 23 )
            break;
          v8 = dword_14027CC90[v8];
        }
        v10 = 472LL;
LABEL_12:
        *((_QWORD *)v3 + 1) = *(_QWORD *)((char *)this + v10);
        *(_QWORD *)((char *)this + v10) = v3;
      }
      else
      {
        *((_QWORD *)v3 + 1) = 0LL;
      }
      v3 = v7;
    }
    while ( v7 );
  }
  *a3 = v3;
  return v3 == 0LL;
}
