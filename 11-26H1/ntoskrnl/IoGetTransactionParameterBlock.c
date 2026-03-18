/*
 * XREFs of IoGetTransactionParameterBlock @ 0x140447BD0
 * Callers:
 *     IopTrackLink @ 0x140ACE24C (IopTrackLink.c)
 * Callees:
 *     <none>
 */

PTXN_PARAMETER_BLOCK __stdcall IoGetTransactionParameterBlock(PFILE_OBJECT FileObject)
{
  PTXN_PARAMETER_BLOCK result; // rax

  result = (PTXN_PARAMETER_BLOCK)FileObject->FileObjectExtension;
  if ( result )
    return (PTXN_PARAMETER_BLOCK)result->TransactionObject;
  return result;
}
